/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKProgressProvider;

@interface CLKComplicationTemplateUtilitarianSmallProgressRingImage : CLKComplicationTemplate {

	CLKImageProvider* _imageProvider;
	CLKProgressProvider* _progressProvider;
	long long _ringStyle;

}

@property (nonatomic,copy) CLKImageProvider * imageProvider;                    //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,copy) CLKProgressProvider * progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (assign,nonatomic) long long ringStyle;                               //@synthesize ringStyle=_ringStyle - In the implementation block
-(void)_enumerateProgressProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(CLKImageProvider *)imageProvider;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)setProgressProvider:(CLKProgressProvider *)arg1 ;
-(CLKProgressProvider *)progressProvider;
-(long long)ringStyle;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setRingStyle:(long long)arg1 ;
@end

