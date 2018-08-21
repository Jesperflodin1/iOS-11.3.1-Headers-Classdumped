/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFTitleCardSection.h>
#import <libobjc.A.dylib/SFScoreboardCardSection.h>
@class NSArray, NSString, SFColor, SFSportsTeam, NSDictionary, NSData;


@protocol SFScoreboardCardSection <SFTitleCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) SFSportsTeam * team1; 
@property (nonatomic,retain) SFSportsTeam * team2; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,copy) NSString * eventStatus; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(NSDictionary *)dictionaryRepresentation;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setTeam1:(id)arg1;
-(void)setTeam2:(id)arg1;
-(void)setEventStatus:(id)arg1;
-(NSArray *)punchoutOptions;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(SFSportsTeam *)team1;
-(SFSportsTeam *)team2;
-(NSString *)eventStatus;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(NSData *)jsonData;
-(void)setAccessibilityDescription:(id)arg1;
-(NSString *)accessibilityDescription;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFSportsTeam, NSDictionary, NSData, SFCard;

@interface SFScoreboardCardSection : SFTitleCardSection <SFScoreboardCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	SFSportsTeam* _team1;
	SFSportsTeam* _team2;
	NSString* _accessibilityDescription;
	NSString* _eventStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL isCentered; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,retain) SFSportsTeam * team1;                                   //@synthesize team1=_team1 - In the implementation block
@property (nonatomic,retain) SFSportsTeam * team2;                                   //@synthesize team2=_team2 - In the implementation block
@property (nonatomic,copy) NSString * accessibilityDescription;                      //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (nonatomic,copy) NSString * eventStatus;                                   //@synthesize eventStatus=_eventStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setTeam1:(SFSportsTeam *)arg1 ;
-(void)setTeam2:(SFSportsTeam *)arg1 ;
-(void)setEventStatus:(NSString *)arg1 ;
-(NSArray *)punchoutOptions;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(SFSportsTeam *)team1;
-(SFSportsTeam *)team2;
-(NSString *)eventStatus;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(NSData *)jsonData;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(NSString *)accessibilityDescription;
@end

