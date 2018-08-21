/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, NSLayoutManager;

@interface UITextDragPreviewRenderer : NSObject {

	NSRange _range;
	CGRect _firstRect;
	CGRect _lastRect;
	CGRect _middleRect;
	CGPoint _origin;
	UIImage* _image;
	BOOL _calculated;
	BOOL _unifyRects;
	NSLayoutManager* _layoutManager;

}

@property (nonatomic,readonly) NSLayoutManager * layoutManager;              //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) CGRect firstLineRect; 
@property (nonatomic,readonly) CGRect bodyRect; 
@property (nonatomic,readonly) CGRect lastLineRect; 
-(UIImage *)image;
-(NSLayoutManager *)layoutManager;
-(void)_calculate;
-(void)_calculateRectsUsingLayoutManager:(id)arg1 ;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 unifyRects:(BOOL)arg3 ;
-(CGRect)firstLineRect;
-(CGRect)bodyRect;
-(CGRect)lastLineRect;
-(CGRect)_correctlyOffsetBoundingRect;
-(CGRect)_rawBoundingRect;
-(void)adjustFirstLineRect:(inout CGRect*)arg1 bodyRect:(inout CGRect*)arg2 lastLineRect:(inout CGRect*)arg3 textOrigin:(CGPoint)arg4 ;
-(id)initWithLayoutManager:(id)arg1 range:(NSRange)arg2 ;
@end

