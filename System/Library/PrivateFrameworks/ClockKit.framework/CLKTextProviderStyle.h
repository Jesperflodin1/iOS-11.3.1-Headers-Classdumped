/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKFont, NSParagraphStyle;

@interface CLKTextProviderStyle : NSObject <NSCopying> {

	BOOL _uppercase;
	CLKFont* _font;
	CLKFont* _smallCapsBaseFont;
	NSParagraphStyle* _paragraphStyle;
	double _minimumScaleFactor;

}

@property (nonatomic,copy) CLKFont * font;                                 //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) CLKFont * smallCapsBaseFont;                    //@synthesize smallCapsBaseFont=_smallCapsBaseFont - In the implementation block
@property (assign,nonatomic) BOOL uppercase;                               //@synthesize uppercase=_uppercase - In the implementation block
@property (nonatomic,copy) NSParagraphStyle * paragraphStyle;              //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                    //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 paragraphStyle:(id)arg4 minimumScaleFactor:(double)arg5 ;
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 paragraphStyle:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setFont:(CLKFont *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLKFont *)font;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(double)minimumScaleFactor;
-(void)setUppercase:(BOOL)arg1 ;
-(void)setSmallCapsBaseFont:(CLKFont *)arg1 ;
-(NSParagraphStyle *)paragraphStyle;
-(void)setParagraphStyle:(NSParagraphStyle *)arg1 ;
-(BOOL)uppercase;
-(CLKFont *)smallCapsBaseFont;
@end

