#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Process_id;        
    int Burst_time;      
    int priority;   
} Process;

void fcfs_scheduler(Process* processes, int n) {
    printf("FCFS Scheduler:\n");
    int current_time = 0;
    
    for (int i = 0; i < n; i++) {
        int waiting_time = current_time - processes[i].Process_id;
        int turnaround_time = waiting_time + processes[i].Burst_time;
        
        printf("Process %d: Waiting Time = %d, Turnaround Time = %d\n",
               processes[i].Process_id, waiting_time, turnaround_time);
        
        current_time += processes[i].Burst_time;
    }
    printf("\n");
}

void sjf_scheduler(Process* processes, int n) {
    printf("SJF Scheduler:\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].Burst_time > processes[j + 1].Burst_time) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
    fcfs_scheduler(processes, n);
}

void round_robin_scheduler(Process* processes, int n, int quantum) {
    printf("Round Robin Scheduler (Quantum = %d):\n", quantum);
    int* remaining_Burst_time = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        remaining_Burst_time[i] = processes[i].Burst_time;
    }
    
    int current_time = 0;
    while (1) {
        int all_processes_completed = 1;
        
        for (int i = 0; i < n; i++) {
            if (remaining_Burst_time[i] > 0) {
                all_processes_completed = 0;
                
                if (remaining_Burst_time[i] <= quantum) {
                    int waiting_time = current_time - processes[i].Process_id;
                    int turnaround_time = waiting_time + remaining_Burst_time[i];
                    
                    printf("Process %d: ",processes[i].Process_id);
                    printf("Waiting Time = %d",waiting_time);
                    printf("Turnaround Time = %d\n", turnaround_time);

                    
                    current_time += remaining_Burst_time[i];
                    remaining_Burst_time[i] = 0;
                } else {
                    int waiting_time = current_time - processes[i].Process_id;
                    printf("Process %d: ",processes[i].Process_id);
                    printf("Waiting Time = %d",waiting_time);
                    printf("Turnaround Time = %d\n", current_time);
                    
                    current_time += quantum;
                    remaining_Burst_time[i] -= quantum;
                }
            }
        }
        
        if (all_processes_completed) {
            break;
        }
    }
    printf("\n");
    free(remaining_Burst_time);
}

void priority_scheduler(Process* processes, int n) {
    printf("Priority Scheduler:\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].priority > processes[j + 1].priority) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
    fcfs_scheduler(processes, n);
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    Process* processes = (Process*)malloc(n * sizeof(Process));
    
    for (int i = 0; i < n; i++) {
        printf("Enter details for Process %d:\n", i + 1);
        printf("Enter Process ID: ");
        scanf("%d", &processes[i].Process_id);
        printf("Enter Burst_time Time: ");
        scanf("%d", &processes[i].Burst_time);
        printf("Enter Priority: ");
        scanf("%d", &processes[i].priority);
    }
    
    printf("\n");
    
    // FCFS Scheduler
    fcfs_scheduler(processes, n);
    
    // SJF Scheduler
    sjf_scheduler(processes, n);
    
    // Round Robin Scheduler
    int quantum;
    printf("Enter the time quantum for Round Robin: ");
    scanf("%d", &quantum);
    round_robin_scheduler(processes, n, quantum);
    
    // Priority Scheduler
    priority_scheduler(processes, n);
    
    free(processes);
    
    return 0;
}