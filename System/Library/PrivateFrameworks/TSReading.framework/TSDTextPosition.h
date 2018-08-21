/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UITextPosition.h>

@interface TSDTextPosition : UITextPosition {

	unsigned long long _charIndex;
	BOOL _eolAffinity;
	float _preferredPosition;
	BOOL _isPreferredStart;

}

@property (nonatomic,readonly) unsigned long long charIndex;              //@synthesize charIndex=_charIndex - In the implementation block
@property (nonatomic,readonly) BOOL endOfLineAffinity;                    //@synthesize eolAffinity=_eolAffinity - In the implementation block
@property (nonatomic,readonly) float preferredPosition;                   //@synthesize preferredPosition=_preferredPosition - In the implementation block
@property (nonatomic,readonly) BOOL isPreferredStart;                     //@synthesize isPreferredStart=_isPreferredStart - In the implementation block
+(id)textPositionWithCharIndex:(unsigned long long)arg1 eolAffinity:(BOOL)arg2 preferredPosition:(float)arg3 isPreferredStart:(BOOL)arg4 ;
+(id)textPositionWithCharIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)distanceFromPosition:(id)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 eolAffinity:(BOOL)arg2 preferredPosition:(float)arg3 isPreferredStart:(BOOL)arg4 ;
-(id)initWithCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)charIndex;
-(BOOL)endOfLineAffinity;
-(float)preferredPosition;
-(BOOL)isPreferredStart;
@end

