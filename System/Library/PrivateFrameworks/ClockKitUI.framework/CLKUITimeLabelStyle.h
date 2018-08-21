/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject <NSCopying> {

	CLKFont* _threeDigitFont;
	CLKFont* _fourDigitFont;
	CLKFont* _designatorFont;

}

@property (nonatomic,retain) CLKFont * threeDigitFont;              //@synthesize threeDigitFont=_threeDigitFont - In the implementation block
@property (nonatomic,retain) CLKFont * fourDigitFont;               //@synthesize fourDigitFont=_fourDigitFont - In the implementation block
@property (nonatomic,retain) CLKFont * designatorFont;              //@synthesize designatorFont=_designatorFont - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLKFont *)designatorFont;
-(CLKFont *)fourDigitFont;
-(void)setThreeDigitFont:(CLKFont *)arg1 ;
-(void)setFourDigitFont:(CLKFont *)arg1 ;
-(void)setDesignatorFont:(CLKFont *)arg1 ;
-(CLKFont *)threeDigitFont;
@end

