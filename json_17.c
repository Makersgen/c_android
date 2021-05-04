//#include <json.h>
//#include <jsoncpp/json/json.h>




#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <json-c/json.h>







int main() {






	struct json_object *jobj;
	struct json_object *foo;
	struct json_object *lat;
	struct json_object *longi;
	
	
	
	
	/*
	
	char *str = "{ \"msg-type\": [ \"0xdeadbeef\", \"irc log\" ], \
		\"msg-from\": { \"class\": \"soldier\", \"name\": \"Wixilav\" }, \
		\"msg-to\": { \"class\": \"supreme-commander\", \"name\": \"[Redacted]\" }, \
		\"msg-log\": [ \
			\"soldier: Boss there is a slight problem with the piece offering to humans\", \
			\"supreme-commander: Explain yourself soldier!\", \
			\"soldier: Well they don't seem to move anymore...\", \
			\"supreme-commander: Oh snap, I came here to see them twerk!\" \
			] \
		}";


	*/

	
	
	//char *str = "{foo: bar, lat: 0.23443, long: 12.3453245}";

	char *str = "{\"foo\": \"bar\", \"lat\": \"0.23443\", \"longi\": \"12.3453245\"}";



	//printf("str:\n---\n%s\n---\n\n", str);


	jobj = json_tokener_parse(str);
	
	
	//json_object *obj_foo = json_object_object_get(foo, "foo");
	
	
	
	printf("The value of foo is %s  \n", 
    		json_object_get_string(json_object_object_get(jobj, "foo"))
	);
	
	
	printf("The value of lat is %s  \n", 
    		json_object_get_string(json_object_object_get(jobj, "lat"))
	);	
	
	
	printf("The value of long is %s  \n", 
    		json_object_get_string(json_object_object_get(jobj, "longi"))
	);
	
	
	
	const char *foo_var = json_object_get_string(json_object_object_get(jobj, "foo"));
	
	const char *lat_var = json_object_get_string(json_object_object_get(jobj, "lat"));
	
	const char *longi_var = json_object_get_string(json_object_object_get(jobj, "longi"));
	
	
	
	
	printf("The value of Foo_var is %s : \n", foo_var);
	
	printf("The value of lat_var is %d : \n", lat_var);
	
	printf("The value of longi_var is %d : \n", longi_var);
	
	
	
	/*
	
	
	printf("jobj from str:\n---\n%s\n---\n", json_object_to_json_string_ext(jobj, JSON_C_TO_STRING_SPACED | JSON_C_TO_STRING_PRETTY));


	json_object_object_get_ex(jobj, "foo,", &foo);
	json_object_object_get_ex(jobj, "lat,", &lat);
	json_object_object_get_ex(jobj, "long,", &longi);
	
	
	
	//json_object_object_get(jobj, "foo");
	//json_object_object_get(jobj, "lat");
	//json_object_object_get(jobj, "longi");
	
	
	
	
	printf("Message type is: %s  \n ", json_object_get_string(foo));
	//printf("Message type is: %d  \n ", json_object_get_int(lat));
	//printf("Message type is: %d  \n ", json_object_get_int(longi));


	*/
	
	
	
	
	
	



	return 0;
}
