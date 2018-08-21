/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBItemRepresentationDataTransferDelegate;
@class NSString;

@interface PBItemRepresentation : NSObject {

	/*^block*/id _loader;
	NSString* _typeIdentifier;
	unsigned long long _preferredRepresentation;
	long long _visibility;
	id<PBItemRepresentationDataTransferDelegate> _dataTransferDelegate;

}

@property (assign,nonatomic) unsigned long long preferredRepresentation;                                            //@synthesize preferredRepresentation=_preferredRepresentation - In the implementation block
@property (assign,nonatomic,__weak) id<PBItemRepresentationDataTransferDelegate> dataTransferDelegate;              //@synthesize dataTransferDelegate=_dataTransferDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeIdentifier;                                                      //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (assign,nonatomic) long long visibility;                                                                  //@synthesize visibility=_visibility - In the implementation block
-(void)setPreferredRepresentation:(unsigned long long)arg1 ;
-(id<PBItemRepresentationDataTransferDelegate>)dataTransferDelegate;
-(id)performProgressTrackingWithLoaderBlock:(/*^block*/id)arg1 onCancelCallback:(/*^block*/id)arg2 ;
-(id)initWithType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(/*^block*/id)arg3 ;
-(id)copyWithDoNothingLoaderBlock;
-(void)setLoaderBlock:(/*^block*/id)arg1 ;
-(NSString *)typeIdentifier;
-(void)setDataTransferDelegate:(id<PBItemRepresentationDataTransferDelegate>)arg1 ;
-(id)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)visibility;
-(void)setVisibility:(long long)arg1 ;
-(id)_loadCompletionBlock:(/*^block*/id)arg1 ;
-(id)loadOpenInPlaceWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithNSItemRepresentation:(id)arg1 ;
-(id)v2_loadCompletionBlock:(/*^block*/id)arg1 ;
-(void)v2_setLoader:(/*^block*/id)arg1 ;
-(id)loadFileCopyWithCompletion:(/*^block*/id)arg1 ;
-(id)v2_loadOpenInPlaceWithCompletion:(/*^block*/id)arg1 ;
-(id)loadDataWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)preferredRepresentation;
@end

