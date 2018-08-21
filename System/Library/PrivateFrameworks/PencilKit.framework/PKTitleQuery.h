/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHQueryDelegate.h>

@protocol PKTitleQueryDelegate;
@class CHTitleQuery, PKDrawing, NSString;

@interface PKTitleQuery : NSObject <CHQueryDelegate> {

	id<PKTitleQueryDelegate> _delegate;
	CHTitleQuery* _titleQuery;
	PKDrawing* _drawing;

}

@property (nonatomic,retain) CHTitleQuery * titleQuery;                             //@synthesize titleQuery=_titleQuery - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                   //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic,__weak) id<PKTitleQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * transcribedTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKTitleQueryDelegate>)delegate;
-(void)setDelegate:(id<PKTitleQueryDelegate>)arg1 ;
-(void)dealloc;
-(void)start;
-(void)pause;
-(void)queryDidUpdateResult:(id)arg1 ;
-(CHTitleQuery *)titleQuery;
-(id)initWithDrawing:(id)arg1 ;
-(void)setTitleQuery:(CHTitleQuery *)arg1 ;
-(NSString *)transcribedTitle;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)drawing;
@end

