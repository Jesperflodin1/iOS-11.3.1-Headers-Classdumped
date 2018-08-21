/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@interface MiroPhotoFreezeInfo : MiroFreezeInfo {

	BOOL _added;
	BOOL _removed;
	BOOL _used;
	BOOL _iris;
	double _duration;

}

@property (assign,nonatomic) BOOL added;                   //@synthesize added=_added - In the implementation block
@property (assign,nonatomic) BOOL removed;                 //@synthesize removed=_removed - In the implementation block
@property (assign,nonatomic) BOOL used;                    //@synthesize used=_used - In the implementation block
@property (assign,nonatomic) BOOL iris;                    //@synthesize iris=_iris - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)isRemoved;
-(BOOL)isAdded;
-(void)setUsed:(BOOL)arg1 ;
-(id)dataRepresentation;
-(BOOL)isFreeze;
-(BOOL)removed;
-(void)setRemoved:(BOOL)arg1 ;
-(void)setAdded:(BOOL)arg1 ;
-(BOOL)used;
-(BOOL)added;
-(BOOL)iris;
-(void)setIris:(BOOL)arg1 ;
@end
