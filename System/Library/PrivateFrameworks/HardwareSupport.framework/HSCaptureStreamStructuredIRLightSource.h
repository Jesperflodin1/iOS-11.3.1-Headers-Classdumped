/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareSupport/HSCaptureStreamIRLightSource.h>

@class NSString;

@interface HSCaptureStreamStructuredIRLightSource : HSCaptureStreamIRLightSource {

	NSString* _pattern;
	NSString* _current;

}

@property (nonatomic,retain) NSString * pattern;              //@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,retain) NSString * current;              //@synthesize current=_current - In the implementation block
+(id)interleaved;
+(id)structured;
-(id)description;
-(NSString *)pattern;
-(NSString *)current;
-(void)setCurrent:(NSString *)arg1 ;
-(void)setPattern:(NSString *)arg1 ;
-(id)initWithSourceName:(id)arg1 modeEnum:(id)arg2 ;
@end

