/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKNoteEditorViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol AKNoteEditorControllerDelegate;
@class AKPopupAnnotation, AKNoteEditorViewController, NSString;

@interface AKNoteEditorController : NSObject <AKNoteEditorViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	AKPopupAnnotation* _annotation;
	id<AKNoteEditorControllerDelegate> _delegate;
	AKNoteEditorViewController* _contentViewController;

}

@property (retain) AKNoteEditorViewController * contentViewController;                        //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) AKPopupAnnotation * annotation;                                  //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSString * editedText; 
@property (assign,nonatomic,__weak) id<AKNoteEditorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hide;
-(void)show:(BOOL)arg1 ;
-(id<AKNoteEditorControllerDelegate>)delegate;
-(void)setDelegate:(id<AKNoteEditorControllerDelegate>)arg1 ;
-(void)setContentViewController:(AKNoteEditorViewController *)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(AKNoteEditorViewController *)contentViewController;
-(AKPopupAnnotation *)annotation;
-(void)setAnnotation:(AKPopupAnnotation *)arg1 ;
-(void)finishEditing;
-(id)_popupBackgroundColorForPopupAnnotation:(id)arg1 ;
-(void)noteEditorViewControllerDidBeginEditing:(id)arg1 ;
-(void)noteEditorViewControllerDidEndEditing:(id)arg1 ;
-(NSString *)editedText;
-(double)suggestedEditorHeightForWidth:(double)arg1 ;
-(void)beginEditing:(BOOL)arg1 ;
@end
