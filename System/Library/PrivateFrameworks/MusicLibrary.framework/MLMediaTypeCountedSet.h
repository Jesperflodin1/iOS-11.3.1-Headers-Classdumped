/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface MLMediaTypeCountedSet : NSObject {

	map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >* _map;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
-(void)addMediaType:(unsigned)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateMediaTypesWithBlock:(/*^block*/id)arg1 ;
@end

