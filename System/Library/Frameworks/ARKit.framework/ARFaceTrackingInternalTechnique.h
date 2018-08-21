/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARTechnique.h>

@protocol OS_dispatch_semaphore;
@class ARFaceTrackingData, NSObject;

@interface ARFaceTrackingInternalTechnique : ARTechnique {

	ARFaceTrackingData* _faceTrackingData;
	NSObject*<OS_dispatch_semaphore> _dataSemaphore;

}
+(void)initialize;
+(BOOL)isSupported;
-(id)init;
-(void)dealloc;
-(unsigned long long)requiredSensorDataTypes;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)faceTrackingOptionsFromImageData:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(id)processData:(id)arg1 ;
@end

