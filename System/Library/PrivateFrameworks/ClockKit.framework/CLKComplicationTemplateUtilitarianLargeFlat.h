/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateUtilitarianLargeFlat : CLKComplicationTemplate {

	CLKTextProvider* _textProvider;
	CLKImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;                //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CLKTextProvider *)textProvider;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
@end

