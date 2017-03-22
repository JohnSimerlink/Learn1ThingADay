export default class HomeController{
  constructor(randomNames){
    this.random =randomNames
    console.log('this.random is', this.random);
    this.name="World";
  }
  changeName(){
    this.name="Mars";
  }
  randomName(){
    console.log('this.random is', this.random, 'and its type is', typeof(randomNames));
    console.log('this.random is', this.random, 'and its type is', typeof(randomNames));
    console.log('this.random is', this.random, 'and its type is', typeof(randomNames));
    console.log('and its type is', typeof(randomNames));
    console.log('and its type is', typeof(randomNames));
    console.log('and its type is', typeof(randomNames));
    this.random.getName()
  }
}

HomeController.$inject = ['randomNames']
