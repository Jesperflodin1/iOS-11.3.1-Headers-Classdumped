/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRCMediaRemoteDeviceQueryDelegate;
@interface _TVRCMediaRemoteDeviceQuery : NSObject {

	void* _televisionController;
	id<_TVRCMediaRemoteDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCMediaRemoteDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_TVRCMediaRemoteDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRCMediaRemoteDeviceQueryDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)_discoveredTelevision:(void*)arg1 ;
-(void)_removedTelevision:(void*)arg1 ;
@end

