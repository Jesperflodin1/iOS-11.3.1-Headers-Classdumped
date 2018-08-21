/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@class AEProgressViewModelSnapshot, PXAssetsDataSourceManager, NSDictionary, NSString;

@interface AEProgressViewModel : PXObservable <PXAssetsDataSourceManagerObserver> {

	AEProgressViewModelSnapshot* _currentSnapshot;
	PXAssetsDataSourceManager* __dataSourceManager;
	NSDictionary* __progressByAsset;

}

@property (nonatomic,readonly) PXAssetsDataSourceManager * _dataSourceManager;                         //@synthesize _dataSourceManager=__dataSourceManager - In the implementation block
@property (setter=_setProgressByAsset:,nonatomic,retain) NSDictionary * _progressByAsset;              //@synthesize _progressByAsset=__progressByAsset - In the implementation block
@property (nonatomic,readonly) AEProgressViewModelSnapshot * progressSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PXAssetsDataSourceManager *)_dataSourceManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)mutableChangeObject;
-(id)initWithDataSourceManager:(id)arg1 ;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(AEProgressViewModelSnapshot *)progressSnapshot;
-(void)setProgress:(id)arg1 forAssetReference:(id)arg2 ;
-(id)_createSnapshot;
-(NSDictionary *)_progressByAsset;
-(void)_setProgressByAsset:(id)arg1 ;
@end

