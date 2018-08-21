/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFJSONSerializable.h>
#import <libobjc.A.dylib/SFCardSection.h>
@class NSArray, NSString, SFCard, SFColor;


@protocol SFCardSection <NSSecureCoding,NSObject>
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
@required
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(NSArray *)commands;
-(void)setCommands:(id)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setHideDivider:(BOOL)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setNextCard:(id)arg1;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(id)arg1;
-(void)setCardSectionId:(id)arg1;
-(void)setResultIdentifier:(id)arg1;
-(NSArray *)punchoutOptions;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(BOOL)hideDivider;
-(NSString *)resultIdentifier;
-(NSString *)cardSectionId;
-(SFCard *)nextCard;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary, NSArray, NSString, SFCard, SFColor;

@interface SFCardSection : NSObject <SFJSONSerializable, SFCardSection, NSCopying> {

	BOOL _hasBottomPadding;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hideDivider;
	int _separatorStyle;
	NSString* _type;
	SFCard* _nextCard;
	NSArray* _commands;
	NSString* _punchoutPickerTitle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerDismissText;
	NSArray* _parameterKeyPaths;
	NSString* _cardSectionId;
	SFColor* _backgroundColor;
	NSString* _resultIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL hideDivider;                                       //@synthesize hideDivider=_hideDivider - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFCard * nextCard;                                      //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,copy) NSArray * commands;                                       //@synthesize commands=_commands - In the implementation block
@property (nonatomic,copy) NSArray * parameterKeyPaths;                              //@synthesize parameterKeyPaths=_parameterKeyPaths - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                                 //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultIdentifier;                              //@synthesize resultIdentifier=_resultIdentifier - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setHideDivider:(BOOL)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(void)setNextCard:(SFCard *)arg1 ;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(NSArray *)arg1 ;
-(void)setCardSectionId:(NSString *)arg1 ;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(NSArray *)punchoutOptions;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(BOOL)hideDivider;
-(NSString *)resultIdentifier;
-(NSString *)cardSectionId;
-(SFCard *)nextCard;
-(NSData *)jsonData;
@end

