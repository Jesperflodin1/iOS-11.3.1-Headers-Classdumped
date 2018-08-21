/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPMediaLibrary;

@interface MPMediaLibraryView : NSObject <NSCopying> {

	shared_ptr<mlcore::DeviceLibraryView>* _coreView;
	MPMediaLibrary* _library;
	unsigned long long _filteringOptions;

}

@property (nonatomic,readonly) shared_ptr<mlcore::DeviceLibraryView>* mlCoreView; 
@property (nonatomic,readonly) MPMediaLibrary * library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) unsigned long long filteringOptions;                            //@synthesize filteringOptions=_filteringOptions - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPMediaLibrary *)library;
-(unsigned long long)filteringOptions;
-(id)initWithLibrary:(id)arg1 filteringOptions:(unsigned long long)arg2 ;
-(shared_ptr<mlcore::QueryResult>*)_performCoreQuery:(shared_ptr<mlcore::Query>*)arg1 error:(id*)arg2 ;
-(void)performCoreQuery:(shared_ptr<mlcore::Query>*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)hasEntitiesForModelKind:(id)arg1 ;
-(shared_ptr<mlcore::DeviceLibraryView>*)mlCoreView;
-(void)performCoreSearchQuery:(shared_ptr<mlcore::LocalizedSearchQuery>*)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

