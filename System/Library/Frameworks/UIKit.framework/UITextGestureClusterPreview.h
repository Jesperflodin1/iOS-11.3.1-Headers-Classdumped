/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextGestureCluster.h>

@class UIPreviewItemController;

@interface UITextGestureClusterPreview : UITextGestureCluster {

	UIPreviewItemController* _previewItemController;
	BOOL _detachOnDealloc;

}
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(void)detach;
-(BOOL)doesControlDelegate;
-(void)_resetForLink;
-(BOOL)shouldClusterAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
@end

