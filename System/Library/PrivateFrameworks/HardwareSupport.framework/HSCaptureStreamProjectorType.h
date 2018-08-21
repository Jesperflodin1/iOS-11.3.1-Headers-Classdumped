/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HSCaptureStreamProjectorType : NSObject {

	BOOL _enabled;
	NSString* _type;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL enabled;                   //@synthesize enabled=_enabled - In the implementation block
+(id)none;
+(id)flood;
+(id)structuredLight;
+(id)interleaved;
+(id)dense;
+(id)denseInterleave;
+(id)sparse;
+(id)sparseInterleave;
+(id)factoryP3D;
+(id)userStudy;
-(BOOL)enabled;
-(NSString *)type;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 ;
@end

