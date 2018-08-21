/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, UIColor;

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	NSNumber* _timerToken;
	BOOL _finalized;
	BOOL _paused;
	UIColor* _tintColor;
	double _backgroundRingAlpha;

}

@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (assign) double backgroundRingAlpha;                 //@synthesize backgroundRingAlpha=_backgroundRingAlpha - In the implementation block
@property (assign,nonatomic) BOOL paused;                      //@synthesize paused=_paused - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_commonInit;
-(void)_update;
-(void)setPaused:(BOOL)arg1 ;
-(void)validate;
-(BOOL)paused;
-(void)_validate;
-(void)_maybeStartOrStopUpdates;
-(double)_progressFractionForNow:(id)arg1 ;
-(BOOL)_needsUpdates;
-(void)stopUpdatesForToken:(NSNumber*)arg1 ;
-(long long)timeTravelUpdateFrequency;
-(NSNumber*)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(double)progressFractionForNow:(id)arg1 ;
-(double)backgroundRingAlpha;
-(void)setBackgroundRingAlpha:(double)arg1 ;
-(void)finalize;
-(id)JSONObjectRepresentation;
@end

