/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextDraggableGeometry.h>
#import <UIKit/UITextDraggableGeometryFastSameViewOperationsSupporting.h>

@protocol UITextDragSupportingUITextDropSupporting;
@class UIView, NSLayoutManager, NSString;

@interface UILayoutManagerBasedDraggableGeometry : NSObject <UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting> {

	long long _geometryOptions;
	UIView*<UITextDragSupporting>*<UITextDropSupporting> _view;
	NSLayoutManager* _layoutManager;

}

@property (nonatomic,__weak,readonly) UIView*<UITextDragSupporting>*<UITextDropSupporting> view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,__weak,readonly) NSLayoutManager * layoutManager;                                        //@synthesize layoutManager=_layoutManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long geometryOptions;                                                       //@synthesize geometryOptions=_geometryOptions - In the implementation block
-(UIView*<UITextDragSupporting>*<UITextDropSupporting>)view;
-(NSLayoutManager *)layoutManager;
-(id)_textStorage;
-(id)initWithView:(id)arg1 layoutManager:(id)arg2 ;
-(id)attributedStringsForTextRanges:(id)arg1 ;
-(id)performSameViewDropOperation:(id)arg1 ;
-(id)textRangesForAttachmentsInTextRange:(id)arg1 ;
-(id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)draggableObjectsForTextRange:(id)arg1 ;
-(void)setGeometryOptions:(long long)arg1 ;
-(id)previewForDroppingText:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3 ;
-(BOOL)_isUsableLink:(id)arg1 ;
-(/*^block*/id)_targetedPreviewProviderForImage:(id)arg1 inRange:(NSRange)arg2 ;
-(/*^block*/id)_targetedPreviewProviderForTextInRange:(NSRange)arg1 overrideLifting:(/*^block*/id)arg2 ;
-(id)_draggableTextInRange:(id)arg1 ;
-(/*^block*/id)_targetedPreviewProviderForTextInRange:(NSRange)arg1 ;
-(/*^block*/id)_previewProviderForTextInRange:(NSRange)arg1 ;
-(CGRect)_textRectForRange:(NSRange)arg1 inView:(id)arg2 ;
-(void)_renderTextInRange:(NSRange)arg1 image:(out id*)arg2 boundingRectangles:(out id*)arg3 forLifting:(BOOL)arg4 ;
-(CGPoint)_textOriginOffsetForRange:(NSRange)arg1 inView:(id)arg2 ;
-(long long)geometryOptions;
@end
