/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <libobjc.A.dylib/PXTileIdentifierConverter.h>

@protocol PXTileIdentifierConverter;
@class NSString;

@interface AEDelegatingTileIdentifierConverter : NSObject <PXTileIdentifierConverter> {

	id<PXTileIdentifierConverter> __wrappedConverter;

}

@property (nonatomic,readonly) id<PXTileIdentifierConverter> _wrappedConverter;              //@synthesize _wrappedConverter=__wrappedConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)transformTileIdentifier:(PXTileIdentifier*)arg1 group:(unsigned long long*)arg2 ;
-(id)initWithWrappedConverter:(id)arg1 ;
-(id<PXTileIdentifierConverter>)_wrappedConverter;
@end

