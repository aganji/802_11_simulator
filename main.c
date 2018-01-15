#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	int frames;
	bool retry;
	int aggregate_size;
	int bo_counter;
	int bo_stage;
} station_node; 

typedef struct {
	long time;
	int action;
} event;

event **event_list_create()
{
	event **__dptr_event;
	__dptr_event = (event**)malloc(2*sizeof(event*));
	__dptr_event[0]=NULL;
	__dptr_event[1]=NULL;
	return __dptr_event;
}

station_node* create_stations(int __network_size)
{

	station_node *station_array = (station_node *)malloc(__network_size*sizeof(station_node));
	
	for (int i = 0; i < __network_size; i++)
	{
		station_array[i].frames=2;
	}
	return station_array;
}


void start_packet_generation(int __network_size,long __start_time,event **__dptr_event)
{
	for (int i = 0; i < __network_size; i++)
	{
		
	}

}

int main(int argc, char* argv[])
{
	// Simulation Declarations
	event **dptr_event_list;
	long current_time = 0;
	long start_time = 0;
	long end_time = 0;
	station_node *ptr_stations;


	// Traffic Class
	int data_rate = 0;
	int frame_size = 0;
	int frame_rate = 0;

	// Network Parameters
	int network_size = 2;
	bool flag_aggregation = false;


	dptr_event_list = event_list_create();
	ptr_stations = create_stations(network_size);
	start_packet_generation(network_size,start_time,dptr_event_list);
	
	
	printf("First station frame: %d\n",ptr_stations[0].frames);

	// Start Simulation
	while(false)
	{
		if(current_time >= end_time)
		{
			break;
		}
		
		// length = poll_event_list(temp_event_array);
		// process_event(temp_event_array,length);
		// advance_clock();

	}
	printf("Execution complete\n");
}
