/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTableRowCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBTableAlignmentSchema, NSData;


@protocol _SFPBTableRowCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,readonly) BOOL hasPunchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (nonatomic,readonly) BOOL hasPunchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (nonatomic,readonly) BOOL hasCanBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (nonatomic,readonly) BOOL hasHasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,readonly) BOOL hasHasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,readonly) BOOL hasType; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,readonly) BOOL hasSeparatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,copy) NSString * tableIdentifier; 
@property (nonatomic,readonly) BOOL hasTableIdentifier; 
@property (nonatomic,retain) _SFPBTableAlignmentSchema * alignmentSchema; 
@property (nonatomic,readonly) BOOL hasAlignmentSchema; 
@property (nonatomic,copy) NSArray * datas; 
@property (assign,nonatomic) BOOL isSubHeader; 
@property (nonatomic,readonly) BOOL hasIsSubHeader; 
@property (nonatomic,copy) NSString * tabGroupIdentifier; 
@property (nonatomic,readonly) BOOL hasTabGroupIdentifier; 
@property (assign,nonatomic) BOOL reducedRowHeight; 
@property (nonatomic,readonly) BOOL hasReducedRowHeight; 
@property (assign,nonatomic) int verticalAlign; 
@property (nonatomic,readonly) BOOL hasVerticalAlign; 
@property (assign,nonatomic) BOOL alignRowsToHeader; 
@property (nonatomic,readonly) BOOL hasAlignRowsToHeader; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setDatas:(id)arg1;
-(id)dataAtIndex:(unsigned long long)arg1;
-(NSArray *)datas;
-(BOOL)hasType;
-(void)setBackgroundColor:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(id)initWithDictionary:(id)arg1;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setHasBottomPadding:(BOOL)arg1;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasPunchoutPickerTitle;
-(BOOL)hasPunchoutPickerDismissText;
-(void)setTableIdentifier:(id)arg1;
-(void)setAlignmentSchema:(id)arg1;
-(BOOL)hasIsSubHeader;
-(NSString *)tabGroupIdentifier;
-(void)setTabGroupIdentifier:(id)arg1;
-(BOOL)hasReducedRowHeight;
-(BOOL)reducedRowHeight;
-(void)setReducedRowHeight:(BOOL)arg1;
-(BOOL)hasVerticalAlign;
-(BOOL)hasAlignRowsToHeader;
-(BOOL)alignRowsToHeader;
-(void)setAlignRowsToHeader:(BOOL)arg1;
-(BOOL)hasTableIdentifier;
-(BOOL)hasAlignmentSchema;
-(BOOL)hasTabGroupIdentifier;
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(BOOL)hasBackgroundColor;
-(NSArray *)punchoutOptions;
-(BOOL)isSubHeader;
-(void)setIsSubHeader:(BOOL)arg1;
-(_SFPBTableAlignmentSchema *)alignmentSchema;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(NSString *)tableIdentifier;
-(unsigned long long)dataCount;
-(NSData *)jsonData;
-(void)addData:(id)arg1;
-(void)clearData;
-(int)verticalAlign;
-(void)setVerticalAlign:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBTableAlignmentSchema, NSData;

@interface _SFPBTableRowCardSection : PBCodable <_SFPBTableRowCardSection, NSSecureCoding> {

	SCD_Struct_SF1 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isSubHeader;
	BOOL _reducedRowHeight;
	BOOL _alignRowsToHeader;
	int _separatorStyle;
	int _verticalAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _tableIdentifier;
	_SFPBTableAlignmentSchema* _alignmentSchema;
	NSArray* _datas;
	NSString* _tabGroupIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                                  //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                             //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasPunchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                       //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (nonatomic,readonly) BOOL hasPunchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden;                                         //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (nonatomic,readonly) BOOL hasCanBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding;                                       //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasHasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding;                                    //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasHasBottomPadding; 
@property (nonatomic,copy) NSString * type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (assign,nonatomic) int separatorStyle;                                       //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasSeparatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor;                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,copy) NSString * tableIdentifier;                                 //@synthesize tableIdentifier=_tableIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTableIdentifier; 
@property (nonatomic,retain) _SFPBTableAlignmentSchema * alignmentSchema;              //@synthesize alignmentSchema=_alignmentSchema - In the implementation block
@property (nonatomic,readonly) BOOL hasAlignmentSchema; 
@property (nonatomic,copy) NSArray * datas;                                            //@synthesize datas=_datas - In the implementation block
@property (assign,nonatomic) BOOL isSubHeader;                                         //@synthesize isSubHeader=_isSubHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasIsSubHeader; 
@property (nonatomic,copy) NSString * tabGroupIdentifier;                              //@synthesize tabGroupIdentifier=_tabGroupIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTabGroupIdentifier; 
@property (assign,nonatomic) BOOL reducedRowHeight;                                    //@synthesize reducedRowHeight=_reducedRowHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasReducedRowHeight; 
@property (assign,nonatomic) int verticalAlign;                                        //@synthesize verticalAlign=_verticalAlign - In the implementation block
@property (nonatomic,readonly) BOOL hasVerticalAlign; 
@property (assign,nonatomic) BOOL alignRowsToHeader;                                   //@synthesize alignRowsToHeader=_alignRowsToHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasAlignRowsToHeader; 
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setDatas:(NSArray *)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(NSArray *)datas;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setData:(id)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(id)dictionaryRepresentation;
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
-(BOOL)hasPunchoutPickerTitle;
-(BOOL)hasPunchoutPickerDismissText;
-(void)setTableIdentifier:(NSString *)arg1 ;
-(void)setAlignmentSchema:(_SFPBTableAlignmentSchema *)arg1 ;
-(BOOL)hasIsSubHeader;
-(NSString *)tabGroupIdentifier;
-(void)setTabGroupIdentifier:(NSString *)arg1 ;
-(BOOL)hasReducedRowHeight;
-(BOOL)reducedRowHeight;
-(void)setReducedRowHeight:(BOOL)arg1 ;
-(BOOL)hasVerticalAlign;
-(BOOL)hasAlignRowsToHeader;
-(BOOL)alignRowsToHeader;
-(void)setAlignRowsToHeader:(BOOL)arg1 ;
-(BOOL)hasTableIdentifier;
-(BOOL)hasAlignmentSchema;
-(BOOL)hasTabGroupIdentifier;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBackgroundColor;
-(NSArray *)punchoutOptions;
-(BOOL)isSubHeader;
-(void)setIsSubHeader:(BOOL)arg1 ;
-(_SFPBTableAlignmentSchema *)alignmentSchema;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(NSString *)tableIdentifier;
-(id)initWithFacade:(id)arg1 ;
-(unsigned long long)dataCount;
-(NSData *)jsonData;
-(void)addData:(id)arg1 ;
-(void)clearData;
-(int)verticalAlign;
-(void)setVerticalAlign:(int)arg1 ;
@end

