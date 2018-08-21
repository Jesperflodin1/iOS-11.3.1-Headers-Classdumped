/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutStaticAdaptable.h>

@protocol PUPhotoEditPrecisionLevelContentViewDataSource;
@class NSString;

@interface PUPhotoEditPrecisionLevelContentView : UIView <PUPhotoEditLayoutStaticAdaptable> {

	long long _layoutOrientation;
	id<PUPhotoEditPrecisionLevelContentViewDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<PUPhotoEditPrecisionLevelContentViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long layoutOrientation;                                                     //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id<PUPhotoEditPrecisionLevelContentViewDataSource>)arg1 ;
-(id<PUPhotoEditPrecisionLevelContentViewDataSource>)dataSource;
-(long long)layoutOrientation;
-(void)setupWithLayoutOrientation:(long long)arg1 ;
@end
