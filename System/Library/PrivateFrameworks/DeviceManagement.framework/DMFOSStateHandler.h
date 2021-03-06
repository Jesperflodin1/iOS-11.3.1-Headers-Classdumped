/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DeviceManagement/DeviceManagement-Structs.h>
@class NSString;

@interface DMFOSStateHandler : NSObject {

	/*^block*/id _block;
	NSString* _name;
	unsigned long long _handle;

}

@property (nonatomic,copy) id block;                                 //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long handle;              //@synthesize handle=_handle - In the implementation block
-(unsigned long long)handle;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setHandle:(unsigned long long)arg1 ;
-(os_state_data_s*)_serializeState;
-(id)initWithQueue:(id)arg1 name:(id)arg2 stateHandlerBlock:(/*^block*/id)arg3 ;
@end

