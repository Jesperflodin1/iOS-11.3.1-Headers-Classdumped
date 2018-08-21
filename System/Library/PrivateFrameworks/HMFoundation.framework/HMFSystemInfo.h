/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface HMFSystemInfo : HMFObject {

	NSString* _name;
	NSString* _model;
	NSString* _serialNumber;
	NSString* _regionInfo;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	MGNotificationTokenStructRef _notificationToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) MGNotificationTokenStructRef notificationToken;                    //@synthesize notificationToken=_notificationToken - In the implementation block
@property (copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * model;                                             //@synthesize model=_model - In the implementation block
@property (copy,readonly) NSString * regionInfo;                                        //@synthesize regionInfo=_regionInfo - In the implementation block
@property (copy,readonly) NSString * serialNumber;                                      //@synthesize serialNumber=_serialNumber - In the implementation block
+(id)systemInfo;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(void)startMonitoringSystemChanges;
-(void)__initialize;
-(void)setRegionInfo:(NSString *)arg1 ;
-(void)notifyNameUpdated:(id)arg1 ;
-(void)updateName;
-(NSString *)serialNumber;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)regionInfo;
-(MGNotificationTokenStructRef)notificationToken;
@end

