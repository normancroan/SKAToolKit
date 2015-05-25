//
//  SKASpriteLayer.h
//  SKATMXParser
//
//  Created by Skyler Lauren on 5/4/15.
//  Copyright (c) 2015 Sprite Kit Alliance. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "SKASprite.h"

@interface SKASpriteLayer : SKNode

//two dementional array of SKASprites
@property (nonatomic, strong)NSArray *sprites;

@property (nonatomic)NSInteger height;
@property (nonatomic)NSInteger width;

@property (nonatomic)float opacity;
@property (nonatomic, strong)NSString *type;
@property (nonatomic)NSInteger x;
@property (nonatomic)NSInteger y;
@property (nonatomic)BOOL visible;

@property (nonatomic, strong)NSArray *collisionSprites;

@end
