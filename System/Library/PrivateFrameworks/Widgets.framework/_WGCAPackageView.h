/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UICAPackageView.h>

@class NSURL, NSString;

@interface _WGCAPackageView : _UICAPackageView {

	NSURL* _archiveURL;

}

@property (nonatomic,copy) NSURL * archiveURL;                                  //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapshotIdentifier; 
+(void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)description;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setArchiveURL:(NSURL *)arg1 ;
-(BOOL)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1 ;
-(NSString *)snapshotIdentifier;
-(NSURL *)archiveURL;
@end

