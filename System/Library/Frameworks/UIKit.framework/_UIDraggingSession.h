/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIDraggingInfo.h>

@protocol _UIDraggingSessionDelegate;
@class _UIInternalDraggingSessionSource, NSString;

@interface _UIDraggingSession : NSObject <_UIDraggingInfo> {

	id<_UIDraggingSessionDelegate> _delegate;
	_UIInternalDraggingSessionSource* _internalSessionSource;

}

@property (getter=_internalSessionSource,nonatomic,__weak,readonly) _UIInternalDraggingSessionSource * internalSessionSource;              //@synthesize internalSessionSource=_internalSessionSource - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDraggingSessionDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long draggingSourceOperationMask; 
@property (assign,nonatomic) long long numberOfValidItemsForDrop; 
@property (nonatomic,readonly) _UIDraggingSession * localDraggingSession; 
+(void)_cancelAllDrags;
-(id)init;
-(id<_UIDraggingSessionDelegate>)delegate;
-(void)setDelegate:(id<_UIDraggingSessionDelegate>)arg1 ;
-(void)addItems:(id)arg1 ;
-(BOOL)prefersFullSizePreview;
-(void)_cancelDrag;
-(id)_internalSessionSource;
-(_UIDraggingSession *)localDraggingSession;
-(CGPoint)draggingLocationInCoordinateSpace:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMask;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(long long)numberOfValidItemsForDrop;
-(void)setNumberOfValidItemsForDrop:(long long)arg1 ;
-(id)initWithInternalSessionSource:(id)arg1 ;
-(void)_getOperationMaskFromDelegateInApp:(unsigned long long*)arg1 outsideApp:(unsigned long long*)arg2 ;
-(BOOL)_shouldCancelOnAppDeactivation;
-(void)_sendWillBegin;
-(void)_sendHandedOffDragImage;
-(void)_sendHandedOffDragImageForItem:(id)arg1 ;
-(void)_sendWillAddItems:(id)arg1 ;
-(void)_sendWillEndWithOperation:(unsigned long long)arg1 ;
-(void)_sendDidEndWithOperation:(unsigned long long)arg1 ;
-(void)_sendDidMove;
-(void)_sendDataTransferFinished;
-(BOOL)_dynamicallyUpdatesPrefersFullSizePreviewss;
@end

