/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, _MXExtensionMatchingMerger, _MXExtensionDispatchCenter, _MXExtensionServiceCenter, _MXAssetStorage;

@interface _MXExtensionProvider : NSObject {

	Class _extensionMatchingClass;
	id _matchingContext;
	id _intentNonUIMatchingContext;
	id _intentUIMatchingContext;
	NSArray* _blacklistedExtensions;
	NSArray* _blacklistedContainingApplications;
	_MXExtensionMatchingMerger* _merger;
	_MXExtensionDispatchCenter* _dispatchCenter;
	_MXExtensionServiceCenter* _serviceCenter;
	_MXAssetStorage* _assetStorage;

}

@property (nonatomic,retain) _MXExtensionMatchingMerger * merger;                      //@synthesize merger=_merger - In the implementation block
@property (nonatomic,retain) _MXExtensionDispatchCenter * dispatchCenter;              //@synthesize dispatchCenter=_dispatchCenter - In the implementation block
@property (nonatomic,retain) _MXExtensionServiceCenter * serviceCenter;                //@synthesize serviceCenter=_serviceCenter - In the implementation block
@property (nonatomic,retain) _MXAssetStorage * assetStorage;                           //@synthesize assetStorage=_assetStorage - In the implementation block
+(id)sharedProvider;
-(id)init;
-(void)dealloc;
-(id)addExtensionsUpdateHandler:(/*^block*/id)arg1 ;
-(void)removeExtensionUpdateHandler:(id)arg1 ;
-(id)_currentExtensions;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)arg1 ;
-(void)_beginMatchingExtensionsIfNeeded;
-(id)_intentClassFilter:(id)arg1 ;
-(void)_endMatchingExtensionsIfNeeded;
-(void)_restartMatchingExtensionsForDefaultsChange;
-(id)siblingExtensionsWithContainingAppIdentifer:(id)arg1 ;
-(BOOL)_enableExtension:(id)arg1 error:(id*)arg2 ;
-(BOOL)_disableExtension:(id)arg1 error:(id*)arg2 ;
-(void)imageForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadImageForKey:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)imageForKey:(id)arg1 extension:(id)arg2 completion:(/*^block*/id)arg3 ;
-(_MXExtensionMatchingMerger *)merger;
-(void)setMerger:(_MXExtensionMatchingMerger *)arg1 ;
-(_MXExtensionDispatchCenter *)dispatchCenter;
-(void)setDispatchCenter:(_MXExtensionDispatchCenter *)arg1 ;
-(_MXExtensionServiceCenter *)serviceCenter;
-(void)setServiceCenter:(_MXExtensionServiceCenter *)arg1 ;
-(_MXAssetStorage *)assetStorage;
-(void)setAssetStorage:(_MXAssetStorage *)arg1 ;
@end

