/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class SFCard, NSString;

@interface SFCardViewAppearFeedback : SFFeedback {

	unsigned _level;
	SFCard* _card;
	NSString* _fbr;

}

@property (nonatomic,retain) SFCard * card;               //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) unsigned level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSString * fbr;                //@synthesize fbr=_fbr - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLevel:(unsigned)arg1 ;
-(unsigned)level;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(SFCard *)card;
-(void)setCard:(SFCard *)arg1 ;
-(id)initWithCard:(id)arg1 ;
@end

