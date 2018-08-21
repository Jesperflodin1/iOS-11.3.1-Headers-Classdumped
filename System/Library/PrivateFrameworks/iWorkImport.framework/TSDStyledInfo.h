/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDDrawableInfo.h>
#import <iWorkImport/TSSStyleClient.h>

@class TSSStyle, TSDReflection, TSDShadow, TSDStroke, NSString;

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>

@property (nonatomic,retain) TSSStyle * style; 
@property (nonatomic,copy) TSDReflection * reflection; 
@property (nonatomic,copy) TSDShadow * shadow; 
@property (nonatomic,copy) TSDStroke * stroke; 
@property (assign,nonatomic) float opacity; 
@property (nonatomic,readonly) BOOL pathIsOpen; 
@property (nonatomic,readonly) BOOL supportsStyleInspecting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(BOOL)supportsStyleInspecting;
-(id)stylePropertyName;
-(id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2 tailLineEndInfo:(int)arg3 ;
-(id)objectForProperty:(int)arg1 ;
-(TSSStyle *)style;
-(void)setStyle:(TSSStyle *)arg1 ;
-(TSDStroke *)stroke;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(BOOL)isSelectable;
-(TSDShadow *)shadow;
-(void)setShadow:(TSDShadow *)arg1 ;
-(id)boxedValueForProperty:(int)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setValuesForProperties:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)i_setValue:(id)arg1 forProperty:(int)arg2 ;
-(Class)styleClass;
-(BOOL)pathIsOpen;
-(void)setStroke:(TSDStroke *)arg1 ;
-(TSDReflection *)reflection;
-(id)stylesForCopyStyle;
-(void)setReflection:(TSDReflection *)arg1 ;
-(id)propertyMapForNewPreset;
-(id)styleIdentifierTemplateForNewPreset;
-(id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2 ;
@end

