/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotoLibrary/PLRoundProgressView.h>

@class NSProgress;

@interface AEProgressIndicatorView : PLRoundProgressView {

	NSProgress* __progress;

}

@property (nonatomic,readonly) NSProgress * _progress;              //@synthesize _progress=__progress - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)_progress;
-(id)initWithFrame:(CGRect)arg1 progress:(id)arg2 ;
@end
