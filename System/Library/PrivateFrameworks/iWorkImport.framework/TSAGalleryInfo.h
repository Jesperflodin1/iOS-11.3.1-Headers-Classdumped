/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableInfo.h>
#import <iWorkImport/TSWPStorageParent.h>
#import <iWorkImport/TSDContainerInfo.h>
#import <iWorkImport/TSDModelContainer.h>
#import <iWorkImport/TSDReducibleImageContainer.h>
#import <iWorkImport/TSDCompatibilityAwareMediaContainer.h>
#import <iWorkImport/TSDMixing.h>

@class NSArray, TSWPStorage, TSDMediaStyle, NSString, TSDInfoGeometry;

@interface TSAGalleryInfo : TSDDrawableInfo <TSWPStorageParent, TSDContainerInfo, TSDModelContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSDMixing> {

	NSArray* _items;
	long long _captionMode;
	TSWPStorage* _captionStorage;
	BOOL _isInDocument;
	TSDMediaStyle* _archivedImageStyle;

}

@property (nonatomic,copy) NSArray * items;                                                            //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) long long captionMode; 
@property (nonatomic,readonly) TSWPStorage * captionStorage; 
@property (nonatomic,readonly) BOOL autoListRecognition; 
@property (nonatomic,readonly) BOOL autoListTermination; 
@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) BOOL textIsLinked; 
@property (nonatomic,readonly) BOOL preventsComments; 
@property (nonatomic,readonly) long long contentWritingDirection; 
@property (nonatomic,readonly) BOOL storageChangesInvalidateWrap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) NSArray * childInfos; 
@property (nonatomic,readonly) NSArray * containedModels; 
+(Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2 ;
+(id)i_newCaptionStorageWithContext:(id)arg1 ;
+(id)p_paragraphStyleWithLocalizedNameKey:(id)arg1 inStylesheet:(id)arg2 ;
+(BOOL)p_stylesAreEqualForOutgoingStorage:(id)arg1 incomingStorage:(id)arg2 ;
+(void)addDefaultGalleryCaptionParagraphStyleIfNeededWithFontSize:(double)arg1 toStylesheet:(id)arg2 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchive:(ImageArchive*)arg1 archiver:(id)arg2 ;
-(long long)captionMode;
-(TSWPStorage *)captionStorage;
-(void)loadFromArchive:(const ImageArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)textIsLinked;
-(BOOL)preventsComments;
-(BOOL)storageChangesInvalidateWrap;
-(void)setCaptionStorage:(TSWPStorage *)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeContainedModel:(id)arg1 ;
-(void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(NSArray *)containedModels;
-(void)setCaptionMode:(long long)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 captionStorage:(id)arg3 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)isSelectable;
-(BOOL)needsDownload;
-(id)copyWithContext:(id)arg1 ;
-(id)childEnumerator;
-(void)acceptVisitor:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSArray *)childInfos;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(id)animationFilters;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(BOOL)supportsParentRotation;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(BOOL)textIsVertical;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(long long)contentWritingDirection;
@end

