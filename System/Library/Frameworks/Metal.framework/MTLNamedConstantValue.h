/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTLNamedConstantValue : NSObject {

	NSString* _name;
	unsigned long long _dataType;
	char* _data;

}

@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) void* data;                               //@synthesize data=_data - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 name:(id)arg3 ;
-(id)describe;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void*)data;
-(unsigned long long)dataType;
@end

