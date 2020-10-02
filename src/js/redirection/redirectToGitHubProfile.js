const githubYashSehgalURL = "https://www.github.com/yashsehgal";
const githubURL = "https://www.github.com/";
const username = "yashsehgal";

const redirectToYashSehgalGithub = function redirectToGithub() {
  window.location.replace(githubYashSehgalURL);
};

const redirectToGithub = function redirectToGithub() {
  window.open(githubURL);
};

const getGithubUsername = function getGithubUsername() {
  return username;
};

const getGithubURL = function getGithubURL() {
  return githubURL;
};

const getYashSehgalGithubURL = function getYashSehgalGithubURL() {
  return githubYashSehgalURL;
}
