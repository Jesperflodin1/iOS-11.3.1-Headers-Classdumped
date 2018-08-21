/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, NSMutableDictionary;

@interface AEPackageTransport : PXObservable {

	NSMutableArray* __stagedIdentifiersInOrder;
	NSMutableDictionary* __stagedPackagesByIdentifier;

}

@property (nonatomic,readonly) NSMutableArray * _stagedIdentifiersInOrder;                     //@synthesize _stagedIdentifiersInOrder=__stagedIdentifiersInOrder - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _stagedPackagesByIdentifier;              //@synthesize _stagedPackagesByIdentifier=__stagedPackagesByIdentifier - In the implementation block
-(id)init;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)mutableChangeObject;
-(NSMutableDictionary *)_stagedPackagesByIdentifier;
-(NSMutableArray *)_stagedIdentifiersInOrder;
-(void)_addPackageToStaging:(id)arg1 ;
-(void)_removePackageFromStagingWithIdentifier:(id)arg1 ;
-(void)commitPackage:(id)arg1 ;
-(void)stagePackage:(id)arg1 ;
-(void)stagePackages:(id)arg1 ;
-(void)unstagePackageWithIdentifier:(id)arg1 ;
-(void)unstagePackagesWithIdentifiers:(id)arg1 ;
-(id)orderedStagedIdentifiers;
-(id)stagedPackageForIdentifier:(id)arg1 ;
-(id)stagedPackages;
-(id)packagesWithLivePhotoContent;
-(void)reportError:(id)arg1 ;
@end

