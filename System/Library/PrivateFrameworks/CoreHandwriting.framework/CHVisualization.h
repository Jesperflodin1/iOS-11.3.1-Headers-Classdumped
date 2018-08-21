/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHVisualizationDelegate;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHRecognitionSession;

@interface CHVisualization : NSObject {

	CHRecognitionSession* _recognitionSession;
	id<CHVisualizationDelegate> _delegate;

}

@property (nonatomic,readonly) long long layeringPriority; 
@property (nonatomic,readonly) BOOL wantsInputDrawings; 
@property (nonatomic,retain,readonly) CHRecognitionSession * recognitionSession;              //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (assign,nonatomic) id<CHVisualizationDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(id<CHVisualizationDelegate>)delegate;
-(void)setDelegate:(id<CHVisualizationDelegate>)arg1 ;
-(void)dealloc;
-(long long)layeringPriority;
-(BOOL)wantsInputDrawings;
-(CGColorRef)newColorForVisualizedItemAtIndex:(long long)arg1 ;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(CGPoint)arg1 ;
-(CHRecognitionSession *)recognitionSession;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
@end

