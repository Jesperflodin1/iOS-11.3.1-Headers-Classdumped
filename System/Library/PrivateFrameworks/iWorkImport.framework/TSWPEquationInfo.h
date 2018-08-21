/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDImageInfo.h>
#import <iWorkImport/TSWPDrawableAttachmentDescriptionProvider.h>

@class EQKitEquation, TSSPropertyMap, NSString, TSPData;

@interface TSWPEquationInfo : TSDImageInfo <TSWPDrawableAttachmentDescriptionProvider> {

	EQKitEquation* _equation;
	TSSPropertyMap* _textProperties;
	NSString* _source;
	double _depth;
	TSPData* _pdfImage;

}

@property (nonatomic,retain) EQKitEquation * equation;                     //@synthesize equation=_equation - In the implementation block
@property (nonatomic,copy) NSString * source;                              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) TSSPropertyMap * textProperties;              //@synthesize textProperties=_textProperties - In the implementation block
@property (assign,nonatomic) double depth;                                 //@synthesize depth=_depth - In the implementation block
@property (nonatomic,retain) TSPData * pdfImage;                           //@synthesize pdfImage=_pdfImage - In the implementation block
+(Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2 ;
+(id)fontNameFromTextProperties:(id)arg1 ;
+(BOOL)archiveHasEquationSource:(id)arg1 ;
+(id)equationInfoWithContext:(id)arg1 string:(id)arg2 textStorage:(id)arg3 charIndex:(unsigned long long)arg4 ;
+(id)propertiesForStorage:(id)arg1 characterIndex:(unsigned long long)arg2 ;
+(id)filteredTextPropertiesFromTextProperties:(id)arg1 ;
+(id)eqKitEquationWithWithContext:(id)arg1 source:(id)arg2 error:(id*)arg3 ;
+(id)equationAttachmentWithEquationAttachment:(id)arg1 ;
+(id)equationInfoWithContext:(id)arg1 equationInfo:(id)arg2 textStorage:(id)arg3 charIndex:(unsigned long long)arg4 ;
-(void)saveToArchive:(ImageArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ImageArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)supportsStyleInspecting;
-(BOOL)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 ;
-(void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 ;
-(void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const CharacterStylePropertiesArchive*)arg2 unarchiver:(id)arg3 ;
-(TSSPropertyMap *)textProperties;
-(id)initWithContext:(id)arg1 string:(id)arg2 textProperties:(id)arg3 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 filteredTextProperties:(id)arg3 equation:(id)arg4 pdfImageData:(id)arg5 depth:(double)arg6 geometry:(id)arg7 style:(id)arg8 ;
-(void)setTextProperties:(TSSPropertyMap *)arg1 ;
-(void)saveCharacterStylePropertiesFromPropertyMap:(id)arg1 toArchive:(CharacterStylePropertiesArchive*)arg2 archiver:(id)arg3 ;
-(TSPData *)pdfImage;
-(id)descriptionForDrawableAttachment:(id)arg1 ;
-(id)propertiesForParentAttachment;
-(void)setPdfImage:(TSPData *)arg1 ;
-(id)description;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(BOOL)isSelectable;
-(double)depth;
-(id)copyWithContext:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(BOOL)canAnchor;
-(BOOL)canChangeWrapType;
-(int)elementKind;
-(EQKitEquation *)equation;
-(void)setEquation:(EQKitEquation *)arg1 ;
-(void)setDepth:(double)arg1 ;
@end

