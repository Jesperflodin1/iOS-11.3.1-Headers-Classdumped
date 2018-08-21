/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMModeAndDeviceConfigurationChangeListener : NSObject {

	long long _desiredMode;
	long long _desiredDevicePosition;
	/*^block*/id _handler;

}

@property (assign,nonatomic) long long desiredMode;                        //@synthesize desiredMode=_desiredMode - In the implementation block
@property (assign,nonatomic) long long desiredDevicePosition;              //@synthesize desiredDevicePosition=_desiredDevicePosition - In the implementation block
@property (nonatomic,copy) id handler;                                     //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(long long)desiredDevicePosition;
-(long long)desiredMode;
-(void)setDesiredMode:(long long)arg1 ;
-(void)setDesiredDevicePosition:(long long)arg1 ;
@end
