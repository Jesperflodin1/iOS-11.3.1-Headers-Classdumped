/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIDraggingInfo.h>

@class _UIInternalDraggingSessionDestination, NSString, _UIDraggingSession;

@interface _UIPublicDraggingSessionDestination : NSObject <_UIDraggingInfo> {

	_UIInternalDraggingSessionDestination* _internalSessionDestination;

}

@property (getter=_internalSessionDestination,nonatomic,__weak,readonly) _UIInternalDraggingSessionDestination * internalSessionDestination;              //@synthesize internalSessionDestination=_internalSessionDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long draggingSourceOperationMask; 
@property (assign,nonatomic) long long numberOfValidItemsForDrop; 
@property (nonatomic,readonly) _UIDraggingSession * localDraggingSession; 
-(id)init;
-(id)progress;
-(_UIDraggingSession *)localDraggingSession;
-(CGPoint)draggingLocationInCoordinateSpace:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMask;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(long long)numberOfValidItemsForDrop;
-(void)setNumberOfValidItemsForDrop:(long long)arg1 ;
-(id)_internalSessionDestination;
-(id)initWithInternalSessionDestination:(id)arg1 ;
@end

