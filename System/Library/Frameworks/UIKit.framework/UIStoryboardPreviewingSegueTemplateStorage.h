/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIStoryboardPreviewingSegueTemplate, UIStoryboardSegueTemplate;

@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding> {

	UIView* _sender;
	UIStoryboardPreviewingSegueTemplate* _previewTemplate;
	UIStoryboardSegueTemplate* _commitTemplate;

}

@property (assign,nonatomic,__weak) UIView * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic,__weak) UIStoryboardPreviewingSegueTemplate * previewTemplate;              //@synthesize previewTemplate=_previewTemplate - In the implementation block
@property (assign,nonatomic,__weak) UIStoryboardSegueTemplate * commitTemplate;                         //@synthesize commitTemplate=_commitTemplate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIView *)sender;
-(void)setSender:(UIView *)arg1 ;
-(UIStoryboardPreviewingSegueTemplate *)previewTemplate;
-(void)setPreviewTemplate:(UIStoryboardPreviewingSegueTemplate *)arg1 ;
-(UIStoryboardSegueTemplate *)commitTemplate;
-(void)setCommitTemplate:(UIStoryboardSegueTemplate *)arg1 ;
@end

