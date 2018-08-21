/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,copy,readonly) NSString * networkSSID; 
@property (nonatomic,copy,readonly) NSString * networkPassword; 
-(id)init;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 ;
-(NSString *)deviceName;
@end

