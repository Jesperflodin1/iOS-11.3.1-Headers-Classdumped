/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CADisplay, NSString;

@interface CADisplayMode : NSObject {

	Mode _mode;
	CADisplay* _dpy;
	unsigned long long _width;
	unsigned long long _height;

}

@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) double pixelAspectRatio; 
@property (nonatomic,readonly) double refreshRate; 
@property (nonatomic,readonly) BOOL isVirtual; 
@property (nonatomic,copy,readonly) NSString * colorMode; 
@property (nonatomic,readonly) unsigned long long preferredScale; 
@property (nonatomic,copy,readonly) NSString * hdrMode; 
@property (nonatomic,copy,readonly) NSString * colorGamut; 
@property (nonatomic,readonly) unsigned long long internalRepresentation; 
+(id)_displayModeWithMode:(Mode)arg1 display:(id)arg2 ;
-(BOOL)isVirtual;
-(NSString *)colorMode;
-(void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)_initWithMode:(Mode)arg1 display:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)height;
-(unsigned long long)width;
-(double)refreshRate;
-(NSString *)colorGamut;
-(id)_display;
-(double)pixelAspectRatio;
-(unsigned long long)preferredScale;
-(unsigned long long)internalRepresentation;
-(NSString *)hdrMode;
-(Mode)_mode;
@end

