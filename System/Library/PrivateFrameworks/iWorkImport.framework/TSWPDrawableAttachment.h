/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment {

	TSDDrawableInfo* _drawableInfo;
	int _hOffsetType;
	double _hOffset;
	int _vOffsetType;
	double _vOffset;

}

@property (nonatomic,readonly) TSDDrawableInfo * drawable;              //@synthesize drawableInfo=_drawableInfo - In the implementation block
@property (assign,nonatomic) int hOffsetType;                           //@synthesize hOffsetType=_hOffsetType - In the implementation block
@property (assign,nonatomic) double hOffset;                            //@synthesize hOffset=_hOffset - In the implementation block
@property (assign,nonatomic) int vOffsetType;                           //@synthesize vOffsetType=_vOffsetType - In the implementation block
@property (assign,nonatomic) double vOffset;                            //@synthesize vOffset=_vOffset - In the implementation block
+(void)setPositionerClass:(Class)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(BOOL)shouldInvalidateWhenTextPropertiesChange;
-(BOOL)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 ;
-(void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 ;
-(id)objectsForStyleMigrating;
-(BOOL)supportsUUID;
-(BOOL)preserveAttributesOverSelectionWhenInserting;
-(void)loadMessage:(const DrawableAttachmentArchive*)arg1 fromUnarchiver:(id)arg2 ;
-(void)saveMessage:(DrawableAttachmentArchive*)arg1 toArchiver:(id)arg2 ;
-(void)clearParentStorageForDealloc;
-(void)invalidate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isAnchored;
-(id)copyWithContext:(id)arg1 ;
-(id)childEnumerator;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(BOOL)specifiesEnabledKnobMask;
-(BOOL)isHTMLWrap;
-(BOOL)isSearchable;
-(int)elementKind;
-(TSDDrawableInfo *)drawable;
-(void)setParentStorage:(id)arg1 ;
-(void)setHOffsetType:(int)arg1 ;
-(void)setHOffset:(double)arg1 ;
-(void)setVOffsetType:(int)arg1 ;
-(void)setVOffset:(double)arg1 ;
-(id)initWithContext:(id)arg1 drawable:(id)arg2 ;
-(id)detachDrawable;
-(void)attachDrawable:(id)arg1 ;
-(BOOL)isDrawable;
-(BOOL)isPartitioned;
-(Class)positionerClass;
-(void)infoChanged;
-(int)hOffsetType;
-(double)hOffset;
-(int)vOffsetType;
-(double)vOffset;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
@end

