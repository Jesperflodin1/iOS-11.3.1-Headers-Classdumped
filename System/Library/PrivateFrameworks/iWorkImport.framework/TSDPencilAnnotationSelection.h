/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKSelection.h>

@protocol TSKPencilAnnotation;
@class TSPObject;

@interface TSDPencilAnnotationSelection : TSKSelection {

	TSPObject*<TSKPencilAnnotation> _pencilAnnotation;

}

@property (nonatomic,readonly) TSPObject*<TSKPencilAnnotation> pencilAnnotation;              //@synthesize pencilAnnotation=_pencilAnnotation - In the implementation block
+(Class)archivedSelectionClass;
-(id)initWithPencilAnnotation:(id)arg1 ;
-(TSPObject*<TSKPencilAnnotation>)pencilAnnotation;
-(BOOL)canRemainDuringSharedReadOnlyMode;
-(BOOL)canSaveSelectionToArchivedViewState;
@end

