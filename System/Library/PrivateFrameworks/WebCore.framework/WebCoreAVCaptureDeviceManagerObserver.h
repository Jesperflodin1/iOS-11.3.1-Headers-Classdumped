/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {

	AVCaptureDeviceManager* m_callback;

}
-(id)initWithCallback:(AVCaptureDeviceManager*)arg1 ;
-(void)deviceConnected:(id)arg1 ;
-(void)deviceDisconnected:(id)arg1 ;
-(void)disconnect;
@end

