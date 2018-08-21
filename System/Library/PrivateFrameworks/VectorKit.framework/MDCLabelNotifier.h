/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/VKStyleManagerObserver.h>
#import <libobjc.A.dylib/LabelManagerDelegate.h>

@class NSString;

@interface MDCLabelNotifier : NSObject <GEOResourceManifestTileGroupObserver, VKStyleManagerObserver, LabelManagerDelegate> {

	CLabelLayer* _layer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager; 
+(BOOL)reloadOnStylesheetChange;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)initWithLayer:(CLabelLayer*)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(void)labelManager:(LabelManager*)arg1 setNeedsLayout:(BOOL)arg2 ;
-(void)labelManager:(LabelManager*)arg1 setNeedsDisplay:(BOOL)arg2 ;
-(void)labelManagerDidLayout:(LabelManager*)arg1 ;
-(void)labelManager:(LabelManager*)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr<md::LabelMarker>*)arg2 ;
-(void)labelManager:(LabelManager*)arg1 labelMarkerDidChangeState:(const shared_ptr<md::LabelMarker>*)arg2 ;
-(void)labelManager:(LabelManager*)arg1 pendingArtworkIsReady:(BOOL)arg2 ;
@end
