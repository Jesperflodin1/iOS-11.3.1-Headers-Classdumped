/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableOrderedSet;

@interface GVGraph : NSObject {

	NSMutableOrderedSet* nodes;
	NSMutableOrderedSet* edges;

}

@property (nonatomic,retain) NSMutableOrderedSet * nodes; 
@property (nonatomic,retain) NSMutableOrderedSet * edges; 
@property (nonatomic,readonly) CGRect bounds; 
-(BOOL)hasEdgeFrom:(id)arg1 to:(id)arg2 ;
-(id)edgeFrom:(id)arg1 to:(id)arg2 ;
-(void)removeEdgeFrom:(id)arg1 to:(id)arg2 ;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 reversed:(BOOL)arg3 ;
-(BOOL)hasNode:(id)arg1 ;
-(void)reverseEdge:(id)arg1 ;
-(void)undoReverseEdge:(id)arg1 ;
-(id)connectedSubgraphs;
-(void)iterateOverAllEdges:(/*^block*/id)arg1 ;
-(void)iterateOverAllNodes:(/*^block*/id)arg1 ;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 ;
-(id)init;
-(CGRect)bounds;
-(void)dealloc;
-(id)description;
-(void)setEdges:(NSMutableOrderedSet *)arg1 ;
-(id)allEdges;
-(void)removeNode:(id)arg1 ;
-(NSMutableOrderedSet *)edges;
-(id)allNodes;
-(BOOL)render:(id)arg1 ;
-(void)addNode:(id)arg1 ;
-(NSMutableOrderedSet *)nodes;
-(void)setNodes:(NSMutableOrderedSet *)arg1 ;
@end

